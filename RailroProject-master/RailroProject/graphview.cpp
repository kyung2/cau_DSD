#include "graphview.h"


GraphView::GraphView(QWidget* parent):QGraphicsView(parent){
    backgroundImage = new QImage(":/Image/Map_of_South_Korea-blank.png");
    m_brush = new QBrush(*backgroundImage);
    QGraphicsScene* scene = new QGraphicsScene(this);
   // scene->setItemIndexMethod(QGraphicsScene::NoIndex);
    //connect(this, GraphView::ScrollHandDrag,drawBackground);
    scene->setSceneRect(0, 0, backgroundImage->width(),backgroundImage->height());
    scene->setBackgroundBrush(*m_brush);
    setScene(scene);
    setCacheMode(CacheBackground);
    setViewportUpdateMode(BoundingRectViewportUpdate);
    setRenderHint(QPainter::Antialiasing);
    setTransformationAnchor(AnchorUnderMouse);
  //  scale(qreal(0.8), qreal(0.8));
    setMinimumSize(400, 400);
    setWindowTitle(tr("Map of Korea"));
}
void GraphView::drawBackground(QPainter *painter, const QRectF &rect){
    scene()->clear();
   // QGraphicsView::drawBackground(painter, rect);
    QSize size = backgroundImage->size();
    size.scale(rect.width(), rect.height(), Qt::KeepAspectRatio);
   //painter->setViewport(0, 0,size.width(),size.height());
    painter->drawImage(0, 0, *backgroundImage, 1, 1);

}
void GraphView::wheelEvent(QWheelEvent *event){
    scaleView(pow((double)2, -event->delta() / 240.0));
}
/*void GraphView::sliderMoved(){
    scene()->clear();
    this->viewport()->update();
}*/

void GraphView::scaleView(qreal scaleFactor){
    qreal factor = transform().scale(scaleFactor, scaleFactor).mapRect(QRectF(0, 0, 1, 1)).width();
    if(factor < 0.07 || factor > 100)
        return;
    scale(scaleFactor, scaleFactor);
}
