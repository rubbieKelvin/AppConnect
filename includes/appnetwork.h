#ifndef APPNETWORK_H
#define APPNETWORK_H

#include <QObject>

class AppNetwork : public QObject
{
  Q_OBJECT
public:
  explicit AppNetwork(QObject *parent = nullptr);

signals:

};

#endif // APPNETWORK_H
