# chordMethod(Метод хорд)
📖Educational project, where presented equation solution using chord method.

📖Навчальний проект, де представлено розв'язок рівняння за допомогою метода хорд.

# Українська версія(Ukrainian version)

Нехай дано рівняння f(x)=0. Необхідно знайти його корінь з точністю  на
відрізку [a,b], на якому функція безперервна і на кінцях має значення різних знаків,
тобто f(a)* f(b)<0.

Ідея методу хорд полянає в заміні на відрізку [a,b], функції f(x) на пряму, що проходить через кінці її графіка(точки А з координатами (а,f(a)) та B (b, f(b))(див. рис 3.1).

![](https://github.com/ChyzhykNazar/chordMethod/blob/e4732e8529b72f4e19a814700779608732530ac6/images/%231.png)

Шуканим коренем С буде перетин f(x) з віссю ОХ. Рівняння прямої АВ запишемо у вигляді:

![](https://github.com/ChyzhykNazar/chordMethod/blob/e4732e8529b72f4e19a814700779608732530ac6/images/%232.png)

Приймаючи у = 0, знаходимо

![](https://github.com/ChyzhykNazar/chordMethod/blob/e4732e8529b72f4e19a814700779608732530ac6/images/%233.png)

Цей вираз можна записати в вигляді:

![](https://github.com/ChyzhykNazar/chordMethod/blob/e4732e8529b72f4e19a814700779608732530ac6/images/%234.png)

Якщо Хˇ1 виявляється недостатньо точним, знаходять друге наближення:

![](https://github.com/ChyzhykNazar/chordMethod/blob/e4732e8529b72f4e19a814700779608732530ac6/images/%235.png)

На підставі (3.1) і (3.2) можна записати рекурентну послідовність:

![](https://github.com/ChyzhykNazar/chordMethod/blob/e4732e8529b72f4e19a814700779608732530ac6/images/%236.png)

якщо f(xˇk)*f(b) < 0, і 

![](https://github.com/ChyzhykNazar/chordMethod/blob/e4732e8529b72f4e19a814700779608732530ac6/images/%237.png)

якщо f(xˇk)*f(а) < 0.

![](https://github.com/ChyzhykNazar/chordMethod/blob/e4732e8529b72f4e19a814700779608732530ac6/images/%238.png)
![](https://github.com/ChyzhykNazar/chordMethod/blob/e4732e8529b72f4e19a814700779608732530ac6/images/%239.png)

Посилання:

https://web.posibnyky.vntu.edu.ua/fksa/2kvetnyj_komp%27yuterne_modelyuvannya_system_procesiv/t1/311..htm

# English version(Англійська версія)

http://www.simumath.com/library/book.html?code=Alg_Equations_Chords

https://egyankosh.ac.in/bitstream/123456789/18067/1/Unit-3.pdf
