#ifndef GRAPHEDGE_H
#define GRAPHEDGE_H
#include <QGraphicsItem>
#include "../RailroProject/stationnode.h"
class StationNode;
class GraphEdge : public QGraphicsItem
{
public:
    GraphEdge(StationNode* src, StationNode* dst);

    StationNode* sourceNode() const;
    StationNode* destNode() const;

protected:
    QRectF boundingRect() const Q_DECL_OVERRIDE;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) Q_DECL_OVERRIDE;
private:
    StationNode *src, *dst;

    QPointF srcPoint;
    QPointF dstPoint;
    qreal edgeSize;


};

#endif // GRAPHEDGE_H
