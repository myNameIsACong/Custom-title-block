1.思路就是一个QWidget A 包含了自定义标题栏 B 和QMainWindow窗口 C

2.QMainWindow嵌套进QWidget要先设置QMainWindow的winFlags为Qt::Widget

3.B里面的mouseMoveEvent里面的this->window()其实就是 A， 也可以写成parentWidget()

4.demo是在win写的，mac没测

![asd](https://user-images.githubusercontent.com/95737143/145504807-474fc872-96f8-4336-9cb6-31f44d2c0948.png)
