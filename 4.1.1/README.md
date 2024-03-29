## 4_1_1 Реализация наследования
<details>
<summary>Введение</summary>
 
Суть наследования — это конструктивное построение одного объекта на базе другого объекта. Исходному объекту добавляется новые свойства и функциональность (методы). Описание этой конструкции выполняется в классе. Исходный объект называется родительским, а сконструированный на его базе – производным.

Синтаксис задания родительского класса в описании производного:

```c++
class «наименование производного класса» : «спецификатор доступа» «наименование родительского класса»
```

где «спецификатор доступа» принимает значения public | private | protected для перераспределения элементов родительского класса по разделам производного. Правила перераспределения относительно спецификаторов доступа public и private:
- Закрытые элементы родительского класса не перераспределяются и остаются закрытыми в рамках родительского класса.
- Если спецификатор доступа public, то открытые элементы родительского класса размещаются в открытом разделе производного класса.
- Если спецификатор доступа private, то открытые элементы родительского класса размещаются в закрытом разделе производного класса.

Задачу наследования реализовать посредством описания объекта с использованием структуры и объединения.

</details>

### Постановка задачи
Описать класс cl_parent объекта, в котором следующий состав элементов:

В закрытом разделе:
- одно свойство целого типа;
- метод, с одним целочисленным параметром. который меняет значение свойства в закрытом разделе на удвоенное значение параметра.

В открытом разделе:
- одно свойство целого типа;
- параметризированный конструктор, с двумя целочисленными параметрами, который устанавливает значения свойств в закрытом и открытом разделе. Значение закрытого свойства меняется посредством вызова метода из закрытого раздела;
- метод с двумя целочисленными параметрами, который устанавливает значения свойств в закрытом и открытом разделе. Значение закрытого свойства меняется посредством вызова метода из закрытого раздела;
- метод, который выводит на экран значение обоих свойств. Сперва значение закрытого свойства, потом значение открытого свойства.

Назовем объект данного класса родительским. Соответственно его класс родительским классом.

На базе родительского объекта сконструируем производный объект. Производный объект должен сохранить открытый доступ к открытым элементам родительского класса. Он должен иметь следующие собственные элементы:

В закрытом разделе:
- одно свойство целого типа, наименование которого совпадает с наименование закрытого свойства родительского объекта;

В открытом разделе:
- одно свойство целого типа, наименование которого совпадает с наименование открытого свойства родительского объекта;
- параметризированный конструктор, с двумя целочисленными параметрами, который устанавливает значения свойств в закрытом и открытом разделе;
- метод с двумя целочисленными параметрами, который устанавливает значения свойств в закрытом и открытом разделе. Наименование метода совпадает с наименованием аналогичного метода родительского объекта;
- метод, который выводит на экран значение обоих свойств. Сперва значение закрытого свойства, потом значение открытого свойства.

Наименование метода совпадает с наименованием аналогичного метода родительского объекта.

Разработать производный класс используя класс cl_parent в качестве родительского.

В основной функции реализовать алгоритм:
1. Ввод значения двух целочисленных переменных.
2. Создать объект производного класса используя целочисленных переменных в конструкторе в качестве аргументов в последовательности, как им были присвоены значения. Первый аргумент содержит значение для свойства закрытого раздела/,/ второй для свойства открытого раздела.
3. Вывод значений свойств родительского объекта.
4. Вывод значений свойств производного объекта.
5. Если исходное значение закрытого свойства больше нуля, то:

5.1. Переопределить значения свойств производного объекта, увеличив на единицу введенные исходные значения.

5.2.  Переопределить значения свойств родительского объекта, уменьшив на единицу введенные исходные значения.

5.3. Вывод значений свойств производного объекта.

5.4. Вывод значений свойств родительского объекта.

6. Иначе:

6.1. Переопределить значения свойств родительского объекта, увеличив на единицу введенные исходные значения.

6.2. Переопределить значения свойств производного объекта, уменьшив на единицу введенные исходные значения.

6.3. Вывод значений свойств родительского объекта.

6.4. Вывод значений свойств производного объекта.

### Входные данные
```
8 5
```

### Выходные данные
```
16    5
8    5
9    6
14    4
```

### 2 МЕТОД РЕШЕНИЯ
Для решения задачи используется:
- Родительский класс cl_parrent
- Производный класс cl_derivative
- Оператор цикла for
- Условный оператор if
- Объект стандартного потока ввода-вывода cin, cout
- Заголовочный файл

Методы:
- Параметризированный Конструктор cl_parent
- - Функционал: устанавливает значения свойств в закрытом и открытом разделе. Значение закрытого свойства меняется посредством вызова метода из закрытого раздела
- Метод change()
- - Функционал: устанавливает значения свойств в закрытом и открытом разделе. Значение закрытого свойства меняется посредством вызова метода из закрытого раздела
- Метод print()
- - Функционал: выводит на экран значение обоих свойств. Сперва значение закрытого свойства, потом значение открытого свойства
- Скрытое свойство целого типа - privatProp
- Открытое свойство целого типа - publicProp

### 3 ОПИСАНИЕ АЛГОРИТМОВ
#### Функция
- Имя: main
- Возвращаемое значение: целый тип
- Функционал: Основная функция

| # | Предикант | Действия | # Перехода | Комментарий
| --- | ----- | ------ | ---- | -- |
| 1 | | Ввод значения двух целочисленных переменных | 2
| 2 | | Создать объект производного класса используя целочисленных переменных в конструкторе в качестве аргументов в последовательности, как им были присвоены значения. Первый аргумент содержит значение для свойства закрытого раздела/,/ второй для свойства открытого раздела | 3
| 3 | | Вывод значений свойств родительского объекта | 4
| 4 | | Вывод значений свойств производного объекта | 5
| 5 | iPrivat > 0  | | 6
| | | | 10
| 6 | | Переопределить значения свойств производного объекта, увеличив на единицу введенные исходные значения | 7
| 7 | | Переопределить значения свойств родительского объекта, уменьшив на единицу введенные исходные значения | 8
| 8 | | Вывод значений свойств производного объекта | 9
| 9 | | Вывод значений свойств родительского объекта | 0
| 10 | | Переопределить значения свойств родительского объекта, увеличив на единицу введенные исходные значения | 11
| 11 | | Переопределить значения свойств производного объекта, уменьшив на единицу введенные исходные значения | 12
| 12 | | Вывод значений свойств родительского объекта | 13
| 13 | | Вывод значений свойств производного объекта | 0

#### Конструктор
- Класс объекта: cl_parent
- Модификатор: public
- Параметры: iprivate, ipublic
- Функционал: устанавливает значения свойств в закрытом и открытом разделе. Значение закрытого свойства меняется посредством вызова метода из закрытого раздела

| # | Предикант | Действия | # Перехода | Комментарий
| --- | ----- | ------ | ---- | -- |
| 1 | | publicProp = ipublic | 2
| 2 | | changePrivate(iprivate) | 0

### 4 БЛОК-СХЕМА
![image](https://i.ibb.co/xDs1Yr7/image.png)

### 6 ТЕСТИРОВАНИЕ
| Входные данные | Выходные данные |
| --- | ----- |
|  8 <br> 5 | 16    5 <br> 8    5 <br> 9    6 <br> 14    4 |
| 0 | 0? |
