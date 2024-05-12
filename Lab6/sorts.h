//Лабораторна № 2. Сортировки
//Данный файл содержить реализации сортировок
//Автор: Баранов Валентин, Группа: 3091, Курс: 1
//Дата создания: 27.03.2024 - 28.03.2024

//Впринципе, мне не нравится, что я функцию определяю в заголовочном файле. Я бы предпочёл её здесь только объявить, но пока не понял как это сделать
template<typename T> void swap2(T a, T b)
{
	auto temp = *a;
	*a = *b;
	*b = temp;
}


template<typename T> void qsort(T start, T end)
{
	T old_start = start; T old_end = end;
	if (start >= end) return;
	auto value = *(start + (end - start) / 2);

	while (*start < value) start++;
	while (*end > value) end--;
	if (start < end) swap2(start, end);

	while (start <= end) {
		do { start++; } while (*start < value);
		do { end--; } while (*end > value);
		if (start < end) swap2(start, end);
	}

	qsort(old_start, end); qsort(start, old_end);
}

template<typename T> void bubblesort(T start, T end)
{
	bool run = true;

	while (run) {
		run = false;
		for (size_t ind{ 0 }; ind < (end - start); ind++) {
			if (*(start + ind) > *(start + ind + 1)) {
				swap2(start + ind, start + ind + 1);
				run = true;
			}
		}
		end--;
	}
}

template<typename T> void shakersort(T start, T end)
{
	bool run = true;

	while (run) {
		run = false;
		for (size_t ind{ 0 }; ind < (end - start); ind++) {
			if (*(start + ind) > *(start + ind + 1)) {
				swap2(start + ind, start + ind + 1);
				run = true;
			}
		}
		end--;

		if (!run) return;
		run = false;
		for (size_t ind{ (size_t)(end - start) }; ind; ind--) {
			if (*(start + ind) < *(start + ind - 1)) {
				swap2(start + ind, start + ind - 1);
				run = true;
			}
		}
		start++;
	}
}

template<typename T> void insertionsort(T start, T end)
{
	T temp;
	for (T el{ start + 1 }; el <= end; el++) {
		temp = el;
		while (temp > start && *temp < *(temp - 1)) {
			swap2(temp, temp - 1);
			temp--; 
		};
	}
}
