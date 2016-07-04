#include <QApplication>
#include <QSlider>
#include <QSpinBox>
#include <QHBoxLayout>

int main(int argc, char* argv[]) {
    QApplication app(argc, argv);

    QWidget* widget = new QWidget();
    QSpinBox* spin = new QSpinBox();
    QSlider* slider = new QSlider(Qt::Horizontal);

    spin->setRange(0, 100);
    slider->setRange(0, 100);

    QObject::connect(spin, static_cast<void (QSpinBox:: *)(int)>(&QSpinBox::valueChanged), slider, &QSlider::setValue);
    // or
    //QObject::connect(spin, SIGNAL(valueChanged(int)), slider, SLOT(setValue(int)));

    QObject::connect(slider, SIGNAL(valueChanged(int)), spin, SLOT(setValue(int)));


    QHBoxLayout* layout = new QHBoxLayout();
    layout->addWidget(spin);
    layout->addWidget(slider);
    widget->setLayout(layout);

    widget->show();

    return app.exec();
}
