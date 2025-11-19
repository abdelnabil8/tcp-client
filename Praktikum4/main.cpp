#include <QCoreApplication>
#include <QTcpSocket>
#include<QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString ServerIP = "141.100.51.201";
    quint16 Port = 5454;
    QByteArray Token = "aBUTl+UvheMlB3oeSlwZ9XgxUf9P6clax+0ZurgSkjS4dYarq59A6aZU70Tit6qSBk8\n";

    QTcpSocket socket ;
    qDebug()<<"Connecting to Server ";
    socket.connectToHost(ServerIP,Port);
    if(!socket.waitForConnected(3000)){
        qDebug()<<"error in Connecting";
    }

    socket.write(Token);
    if(!socket.waitForBytesWritten(3000)){
        qDebug()<<"error in sending token";
        return 1 ;
    }


    if(socket.waitForReadyRead(3000)){
        QString Response = socket.readAll();
        qDebug()<<"Response from Server : "<< Response;
    } else {qDebug()<<"error in Response";}


    socket.disconnectFromHost();
    qDebug()<<"Disconnected from Server";

    return a.exec();
}
