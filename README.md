# QT5.14.2编程参考手册

## 一、class

### 1.方法/函数
### 2.命名空间
### 3.按模块划分的类
### 4.已丢弃的类
### 5.QT5.14中的新类

### Q3DBars Class
#### 1.描述</br>
该类使开发人员能够在3D中渲染条形图，并通过自由旋转场景来查看它们。旋转是通过按住鼠标右键并移动鼠标来完成的。通过鼠标滚轮进行缩放。如果启用，则通过鼠标左键进行选择。通过单击鼠标滚轮，可以将场景重置为默认摄像机视图。触摸设备的旋转通过点击和移动完成，通过点击和按住进行选择，并通过按压进行缩放。如果没有明确将轴设置为Q3DBAR，则会创建没有标签的临时默认轴。可以通过轴访问器修改这些默认轴，但一旦为方向明确设置了任何轴，该方向的默认轴就会被破坏。Q3DBars支持同时显示多个系列。并非所有序列都必须具有相同数量的行和列。行和列标签取自第一个添加的序列，除非明确定义为行和列轴。
#### 2.属性</br>
barSpacing : QSizeF</br>
barSpacingRelative : bool</br>
barThickness : float</br>
columnAxis : QCategory3DAxis*</br>
floorLevel : float</br>
multiSeriesUniform : bool</br>
primarySeries : QBar3DSeries*</br>
rowAxis : QCategory3DAxis*</br>
selectedSeries : QBar3DSeries* const</br>
valueAxis : QValue3DAxis*</br>
#### 3.方法/函数</br>
Q3DBars(const QSurfaceFormat *format = nullptr, QWindow *parent = nullptr) 使用可选的父窗口和曲面格式构建新的三维条形图。</br>
virtual ~Q3DBars() 销毁三维条形图所占用资源。</br>
void addAxis(QAbstract3DAxis *axis) 将轴添加到图形中。通过addAxis添加的轴尚未使用，addAxis只是用于将轴的所有权赋予图形。轴不得为null或添加到其他图形。</br>
void addSeries(QBar3DSeries *series) 将序列添加到图形中。一个图形可以包含多个系列，但只能包含一组轴，因此所有系列的行和列必须匹配，可视化数据才有意义。如果图形具有多个可见序列，则在标签未明确设置为轴的情况下，只有主序列将在轴上生成行或列标签。如果新添加的序列已指定选定的栏，则该栏将高亮显示，并且任何现有选择都将被清除。只有一个添加的序列可以具有活动选择。</br>
QList<QAbstract3DAxis *> axes() const</br>
QSizeF barSpacing() const</br>
float barThickness() const</br>
QCategory3DAxis *columnAxis() const</br>
float floorLevel() const</br>
void insertSeries(int index, QBar3DSeries *series)</br>
bool isBarSpacingRelative() const</br>
bool isMultiSeriesUniform() const</br>
QBar3DSeries *primarySeries() const</br>
void releaseAxis(QAbstract3DAxis *axis)</br>
void removeSeries(QBar3DSeries *series)</br>
QCategory3DAxis *rowAxis() const</br>
QBar3DSeries *selectedSeries() const</br>
QList<QBar3DSeries *> seriesList() const</br>
void setBarSpacing(const QSizeF &spacing)</br>
void setBarSpacingRelative(bool relative)</br>
void setBarThickness(float thicknessRatio)</br>
void setColumnAxis(QCategory3DAxis *axis)</br>
void setFloorLevel(float level)</br>
void setMultiSeriesUniform(bool uniform)</br>
void setPrimarySeries(QBar3DSeries *series)</br>
void setRowAxis(QCategory3DAxis *axis)</br>
void setValueAxis(QValue3DAxis *axis)</br>
QValue3DAxis *valueAxis() const</br>


## 二、QML类型

## 三、示例和教程
