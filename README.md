思路就是一个QWidget A 包含了自定义标题栏 B 和QMainWindow窗口 C
QMainWindow嵌套进QWidget要先设置QMainWindow的winFlags为Qt::Widget
B里面的mouseMoveEvent里面的this->window()其实就是 A， 也可以写成parentWidget()
