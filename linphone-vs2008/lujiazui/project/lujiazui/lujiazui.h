#ifndef lujiazui_H
#define lujiazui_H

#include <QtGui/QDialog>
#include "ui_lujiazui.h"
#include "common.h"
#include <QSystemTrayIcon>
#include <QMenu>
#include <QAction>

class lujiazui : public QDialog
{
	Q_OBJECT
public:
	lujiazui(QWidget *parent = 0, Qt::WFlags flags = 0);
	~lujiazui();

	//这个本来是私有的，但不得不移到这里了
	Ui::lujiazuiClass ui;
	QString keyIndex;
	int oldItems,newItems;
	QString scollText;
    int pos;
	QString countDownDt;
	QDateTime servStartDt;
	QString getCountDownDt(QDateTime qdtStart,QDateTime qdtEnd);
	bool isServicing;
	int countMins;
	QTimer *scollTimer;
	QTimer *updateTimer;
	void finishiedServicer(QString serviceID);
	QString currentCallTel;
	QVector<DoctoryInfo>  docInfoVector;//默认总是排序QHash
    
	//void changeEvent(QEvent* event);
	QNetworkAccessManager  *pushClientRequest;
	int callNums;
	int sendNums;
    bool iscalled;
public  slots:
	void linponeIterate();
	//接听挂断按钮
	void on_sipcallBtn_clicked();
	void on_siphungupBtn_clicked();
	//列表刷新按钮
	void on_listUpdateBtn_clicked();
	//服务器状态修改按钮
	void on_serviceCsBtn_clicked();
	//获取预约列表
	//void replyDocClassFinished(QNetworkReply *reply);	
	//获取预约列表
	void replyDocFinished(QNetworkReply *reply);
	//修改服务器状态
	void replyCSFinished(QNetworkReply *reply);
	void changeCurrent(const QModelIndex &current,const QModelIndex &previous);
	void comboBoxValueChanged(const QString currentText);
	void sendIFFinished(QNetworkReply *reply);
	void pushClientFinished(QNetworkReply *reply);
	void updateAppoitment();
	void scollTimerOut();
	//退出登录
	void on_signoutBtn_clicked();

	void showWindows();

	void on_trayIcon_activated(QSystemTrayIcon::ActivationReason reason);
	void closeApp();

	//void openUrl(const QString);

private:
	//服务分类列表
	QNetworkAccessManager  *sendInfoRequest;

	//服务分类列表
	QNetworkAccessManager  *managerDoctoryClass;
	//服务列表
	QNetworkAccessManager  *managerDoctory;
	//从服务器端修改状态
	QNetworkAccessManager  *checkState;
	QStandardItemModel* initModel;
	QMap<QString,DoctoryInfo>  map_docinfo;


	QMap<QString,DoctoryClassList> map_docclass;
	QMap<QString,QString> sendInfoMap;
	void loadClassJson();
	void loadDocJson();
	void initClassList();
	void initDocTable();
	QString getLoginId();
	int compareTime();

	QAction  *action_quit;
    QSystemTrayIcon *trayIcon;
    QMenu *trayIconMenu;

	void createTrayIcon();
	void createActions();
};

#endif // lujiazui_H
