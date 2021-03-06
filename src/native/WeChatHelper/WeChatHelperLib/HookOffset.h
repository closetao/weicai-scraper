#pragma once
//偏移地址定义

#if WECHAT_WINDLL_VERSION == 26852

#define offset_LoginSign 0x126D860		//登陆标志位

#define offset_ReciveMessage 0x315E98-5			//接收消息
#define offset_ReciveMessageParam 0x126D7F8		//接收消息的参数
#define offset_ReciveMessageParam_MsgType 0x30 //消息类型
#define offset_ReciveMessageParam_MsgSourceType 0x34 //消息来源类型
#define offset_ReciveMessageParam_MsgReciver 0x40 //消息的接收者
#define offset_ReciveMessageParam_MsgContent 0x68 //消息主体
#define offset_ReciveMessageParam_MsgSender 0x114 //消息的发送者

#define offset_QrCode 0x1F110B			//二维码
#define offset_QrCodeContect 0x127F618	//二维码内容

#define offset_GoToQrCode1 0x1EEE30			//跳转到二维码
#define offset_GoToQrCode2 0x2E3070			//跳转到二维码

#define offset_WxAntiRevoke 0x312565			//防撤回

#elif WECHAT_WINDLL_VERSION == 27188

#define offset_LoginSign 0x13973B4	//登录标志位

#define offset_ReciveMessage 0x325373		//接收消息
#define offset_ReciveMessageParam 0x13971B8		//接收消息的参数
#define offset_ReciveMessageParam_MsgType 0x30 //消息类型
#define offset_ReciveMessageParam_MsgSourceType 0x34 //消息来源类型
#define offset_ReciveMessageParam_MsgReciver 0x40 //消息的接收者
#define offset_ReciveMessageParam_MsgContent 0x68 //消息主体
#define offset_ReciveMessageParam_MsgSender 0x114 //消息的发送者

#define offset_QrCode 0x0			//二维码
#define offset_QrCodeContect 0x0	//二维码内容

#define offset_GoToQrCode1 0x0			//跳转到二维码
#define offset_GoToQrCode2 0x0			//跳转到二维码

#define offset_WxAntiRevoke 0x26256B		//防撤回

#elif WECHAT_WINDLL_VERSION == 27276

#define offset_LoginSign 0x0	//登录标志位

#define offset_ReciveMessage 0x34DF18-5		//接收消息
#define offset_ReciveMessageParam 0x1624908		//接收消息的参数
#define offset_ReciveMessageParam_MsgType 0x30 //消息类型
#define offset_ReciveMessageParam_MsgSourceType 0x34 //消息来源类型
#define offset_ReciveMessageParam_MsgReciver 0x40 //消息的接收者
#define offset_ReciveMessageParam_MsgContent 0x68 //消息主体
#define offset_ReciveMessageParam_MsgSender 0x118 //消息的发送者

#define offset_QrCode 0x0			//二维码
#define offset_QrCodeContect 0x0	//二维码内容

#define offset_GoToQrCode1 0x0			//跳转到二维码
#define offset_GoToQrCode2 0x0			//跳转到二维码

#define offset_WxAntiRevoke 0x0			//防撤回


#elif WECHAT_WINDLL_VERSION == 27278

#define offset_LoginSign 0x0	//登录标志位

#define offset_ReciveMessage 0x34E238-5		//接收消息
#define offset_ReciveMessageParam 0x16268B0		//接收消息的参数
#define offset_ReciveMessageParam_MsgType 0x30 //消息类型
#define offset_ReciveMessageParam_MsgSourceType 0x34 //消息来源类型
#define offset_ReciveMessageParam_MsgReciver 0x40 //消息的接收者
#define offset_ReciveMessageParam_MsgContent 0x68 //消息主体
#define offset_ReciveMessageParam_MsgSender 0x118 //消息的发送者

#define offset_QrCode 0x0			//二维码
#define offset_QrCodeContect 0x0	//二维码内容

#define offset_GoToQrCode1 0x0			//跳转到二维码
#define offset_GoToQrCode2 0x0			//跳转到二维码

#define offset_WxAntiRevoke 0x0			//防撤回


#elif WECHAT_WINDLL_VERSION == 28088

#define offset_LoginSign 0x0	//登录标志位

#define offset_ReciveMessage 0x350878-5		//接收消息
#define offset_ReciveMessageParam 0x16288F8		//接收消息的参数
#define offset_ReciveMessageParam_MsgType 0x30 //消息类型
#define offset_ReciveMessageParam_MsgSourceType 0x34 //消息来源类型
#define offset_ReciveMessageParam_MsgReciver 0x40 //消息的接收者
#define offset_ReciveMessageParam_MsgContent 0x68 //消息主体
#define offset_ReciveMessageParam_MsgSender 0x118 //消息的发送者

#define offset_QrCode 0x0			//二维码
#define offset_QrCodeContect 0x0	//二维码内容

#define offset_GoToQrCode1 0x0			//跳转到二维码
#define offset_GoToQrCode2 0x0			//跳转到二维码

#define offset_WxAntiRevoke 0x28866B			//防撤回

#endif