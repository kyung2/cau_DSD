#ifndef STATIONNODE_H
#define STATIONNODE_H
#include <QGraphicsItem>
#include <../RailroProject/graphview.h>
#include "graphedge.h"
class StationNode : public QGraphicsItem
{
public:
    StationNode(GraphView *graphView);
    void addEdge(GraphEdge *edge);
    QList<GraphEdge*>edges() const;
    QRectF boundingRect() const Q_DECL_OVERRIDE;
    QPainterPath shape() const Q_DECL_OVERRIDE;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) Q_DECL_OVERRIDE;
protected:
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *evet) Q_DECL_OVERRIDE;

private:
    QList<GraphEdge*> edgeList;
    QPointF newPos;
    GraphView* graph;

};

#endif // STATIONNODE_H
