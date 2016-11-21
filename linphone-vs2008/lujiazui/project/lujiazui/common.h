#ifndef _COMMON_H
#define _COMMON_H

#include <QSettings>
#include <QDir>
#include <QTimer>
#include <QtNetwork>
#include <QNetworkReply>
#include <QNetworkAccessManager>
#include <QStandardItemModel>
#include <QStringList>
#include <QMap>
#include <QMessageBox>
#include <QDebug>
#include <QString>
#include <QEvent>
#include <QCloseEvent>
#include< iostream>
#include "linphonecore.h"
#include "private.h"
#include <fstream>
#include "json/json.h"
#include <logindlg.h>

using namespace std;

//sip服务器注册信息
typedef struct SipInfo{
	char usrname[64];
	char password[64];
	char sipip[64];
	char serverip[64];
}SipInfo;

//用户登录信息
typedef struct LoginInfo{
	QString username;
	QString secret;
}LoginInfo;


//预约分类列表结构
typedef struct DoctoryClassList{
	char c_code[32];
	char c_parentId[64];
	char c_name[64];
	char c_id[64];

}DoctoryClassList;

//医生列表结构
typedef struct DoctoryInfo{
	char id[32];
	char deviceId[128];
	char datetime[32];
	char service[128];
	char siptel[32];
	char yuyuedate[128];
	char yuyuetime[64];
	char senddt[64];
}DoctoryInfo;

bool ReadUserConfig();
bool RegisterSip();
QString getMd5Check( QString md5key );
int assumeSingleInstance(const char* program);

#endif