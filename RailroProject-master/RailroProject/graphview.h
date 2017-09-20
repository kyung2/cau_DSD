#ifndef GRAPHVIEW_H
#define GRAPHVIEW_H
#include <QGraphicsView>
#include <QWheelEvent>
#include <QScrollBar>

class GraphView : public QGraphicsView
{
    Q_OBJECT
public:
    GraphView(QWidget* parent=0);
protected:
 //   void zoomIn();
 //   void zoomOut();
    void wheelEvent(QWheelEvent* event) Q_DECL_OVERRIDE;
    void drawBackground(QPainter* painter, const QRectF& rect) Q_DECL_OVERRIDE;
    void scaleView(qreal scaleFactor);
private:
    QImage* backgroundImage;
    QBrush* m_brush;
};

#endif // GRAPHVIEW_H
