#include "labeldef.h"
//  This file is a definition file for the ESPAtherma.
//  uncomment each value you want to query for your installation.

LabelDef labelDefs[] = {
//{0x00,0,801,0,-1,"*冷媒種別"},
//{0x00,0,152,1,-1,"センサ数(個)"},
//{0x00,1,152,1,-1,"INVデータ数(個)"},
//{0x00,2,152,1,-1,"STD圧縮機"},
//{0x00,3,152,1,-1,"ファンデータ数(個)"},
//{0x00,4,152,1,-1,"EVデータ数(個)"},
//{0x00,5,152,1,-1,"四路弁データ(数)"},
//{0x00,6,152,1,-1,"クランクケースヒータ数(個)"},
//{0x00,7,152,1,-1,"電磁弁(数)"},
//{0x00,8,152,1,-1,"データ収集可能室内機台数"},
//{0x00,9,152,1,-1,"室内機接続台数"},
//{0x00,10,213,1,-1,"室外機マイコンID"},
//{0x00,11,213,1,-1,"室外機マイコンID"},
//{0x10,0,217,1,-1,"運転モード"},
//{0x10,1,307,1,-1,"サーモON/OFF"},
//{0x10,1,306,1,-1,"再起動待機"},
//{0x10,1,305,1,-1,"起動制御中"},
//{0x10,1,304,1,-1,"デフロスト運転"},
//{0x10,1,303,1,-1,"油戻し運転"},
//{0x10,1,302,1,-1,"均油運転"},
//{0x10,1,301,1,-1,"デマンド指令"},
//{0x10,1,300,1,-1,"低騒音制御"},
//{0x10,2,307,1,-1,"その他制御1"},
//{0x10,2,306,1,-1,"その他制御2"},
//{0x10,2,305,1,-1,"その他制御3"},
//{0x10,2,304,1,-1,"その他制御4"},
//{0x10,2,303,1,-1,"その他制御5"},
//{0x10,2,302,1,-1,"その他制御6"},
//{0x10,2,301,1,-1,"その他制御7"},
//{0x10,2,300,1,-1,"その他制御8"},
//{0x10,3,307,1,-1,"その他制御9"},
//{0x10,3,306,1,-1,"その他制御10"},
//{0x10,3,305,1,-1,"その他制御11"},
//{0x10,3,304,1,-1,"その他制御12"},
//{0x10,3,303,1,-1,"その他制御13"},
//{0x10,3,302,1,-1,"その他制御14"},
//{0x10,3,301,1,-1,"その他制御15"},
//{0x10,3,300,1,-1,"その他制御16"},
//{0x10,4,203,1,-1,"エラーレベル"},
//{0x10,5,204,1,-1,"エラーコード"},
//{0x10,6,114,2,1,"目標蒸発温度"},
//{0x10,8,114,2,1,"目標凝縮温度"},
//{0x10,10,307,1,-1,"吐出管温度垂下"},
//{0x10,10,310,1,-1,"吐出管保護リトライ回数"},
//{0x10,10,303,1,-1,"圧縮機INV電流垂下"},
//{0x10,10,311,1,-1,"圧縮機INV電流保護リトライ回数"},
//{0x10,11,307,1,-1,"高圧垂下制御"},
//{0x10,11,310,1,-1,"高圧保護リトライ回数"},
//{0x10,11,303,1,-1,"低圧垂下制御"},
//{0x10,11,311,1,-1,"低圧保護リトライ回数"},
//{0x10,12,303,1,-1,"その他制御"},
//{0x00,0,995,1,-1,"NextDataGrid"},
//{0x20,0,105,2,1,"外気温度"},
//{0x20,2,105,2,1,"外熱交温度"},
//{0x20,4,105,2,1,"吐出管温度"},
//{0x20,6,105,2,1,"吸入管温度"},
//{0x20,8,105,2,1,"室外熱交中間温度"},
//{0x20,10,105,2,1,"液管温度"},
//{0x20,12,105,2,1,"INVフィン温度"},
//{0x20,14,105,2,2,"低圧圧力"},
//{0x20,14,405,2,1,"低圧圧力(T)"},
//{0x20,16,105,2,-1,"センサーデータ9"},
//{0x20,18,105,2,-1,"センサーデータ10"},
//{0x20,20,105,2,-1,"センサーデータ11"},
//{0x21,0,105,2,-1,"INV1次電流"},
//{0x21,2,105,2,-1,"INV2次電流"},
//{0x21,4,105,2,1,"INVフィン温度"},
//{0x21,6,105,2,-1,"センサーデータ4"},
//{0x21,8,105,2,-1,"センサーデータ5"},
//{0x21,10,105,2,-1,"センサーデータ6"},
//{0x21,12,105,2,-1,"センサーデータ7"},
//{0x21,14,105,2,-1,"センサーデータ8"},
//{0x21,16,105,2,-1,"センサーデータ9"},
//{0x21,18,105,2,-1,"センサーデータ10"},
//{0x21,20,105,2,-1,"センサーデータ11"},
//{0x00,0,995,1,-1,"NextDataGrid"},
//{0x30,0,152,1,-1,"INV周波数1(rps)"},
//{0x30,1,152,1,-1,"INV周波数2(rps)"},
//{0x30,0,307,1,-1,"STD圧縮機1"},
//{0x30,0,306,1,-1,"STD圧縮機2"},
//{0x30,0,211,1,-1,"ファン1(step)"},
//{0x30,1,211,1,-1,"ファン2(step)"},
//{0x30,0,151,2,-1,"電動弁1(pls)"},
//{0x30,2,151,2,-1,"電動弁2(pls)"},
//{0x30,0,307,1,-1,"四路弁1"},
//{0x30,0,306,1,-1,"四路弁2"},
//{0x30,0,307,1,-1,"クランクケースヒータ1"},
//{0x30,0,306,1,-1,"クランクケースヒータ2"},
//{0x30,0,307,1,-1,"電磁弁1"},
//{0x30,0,306,1,-1,"電磁弁2"},
//{0x30,0,305,1,-1,"電磁弁3"},
//{0x30,0,304,1,-1,"電磁弁4"},
//{0x30,0,303,1,-1,"電磁弁5"},
//{0x30,0,302,1,-1,"電磁弁6"},
//{0x30,0,301,1,-1,"電磁弁7"},
//{0x30,0,300,1,-1,"電磁弁8"},
//{0x30,1,307,1,-1,"電磁弁9"},
//{0x30,1,306,1,-1,"電磁弁10"},
//{0x00,0,998,1,-1,"In-Out separator"},
//{0x60,0,307,1,-1,"データ有効無効"},
//{0x60,1,152,1,-1,"室内機アドレス"},
//{0x60,2,315,1,-1,"室内運転モード"},
//{0x60,2,303,1,-1,"サーモON/OFF"},
//{0x60,2,302,1,-1,"凍結防止"},
//{0x60,2,301,1,-1,"静音モード"},
//{0x60,2,300,1,-1,"水配管凍結防止"},
//{0x60,3,204,1,-1,"エラーコード"},
//{0x60,4,314,2,-1,"室内機コード"},
//{0x60,6,219,1,-1,"室内機容量"},
//{0x60,7,105,2,1,"リモコン設定温度"},
//{0x60,9,105,2,1,"H/P出口設定温度"},
//{0x60,11,307,1,-1,"フロースイッチ"},
//{0x60,11,306,1,-1,"Clixon BUH"},
//{0x60,11,305,1,-1,"Clixon BSH"},
//{0x60,11,304,1,-1,"HP tariff input"},
//{0x60,11,303,1,-1,"ソーラー入力"},
//{0x60,11,302,1,-1,"Not in use"},
//{0x60,11,301,1,-1,"Not in use"},
//{0x60,11,300,1,-1,"Bivalent Operation"},
//{0x60,12,307,1,-1,"3方弁(冷暖)"},
//{0x60,12,306,1,-1,"四路弁(Space/DHW)"},
//{0x60,12,305,1,-1,"BSH"},
//{0x60,12,304,1,-1,"BUH1"},
//{0x60,12,303,1,-1,"BUH2"},
//{0x60,12,302,1,-1,"ボトムプレートヒータ"},
//{0x60,12,301,1,-1,"ポンプ出力"},
//{0x60,12,300,1,-1,"ソーラー出力信号"},
//{0x60,13,212,1,-1,"室内オプションコード"},
//{0x60,14,314,2,-1,"室内ソフトウェアバージョン"},
//{0x60,15,212,1,-1,"室内EEPROMバージョン"},
//{0x61,0,307,1,-1,"データ有効無効"},
//{0x61,1,152,1,-1,"室内機アドレス"},
//{0x61,2,105,2,1,"PHE出口(R1T)"},
//{0x61,4,105,2,1,"BUH出口(R2T)"},
//{0x61,6,105,2,1,"液管温度(R3T)"},
//{0x61,8,105,2,1,"入口温度(R4T)"},
//{0x61,10,105,2,1,"DHW温度(R5T)"},
//{0x61,12,105,2,1,"リモコンサーモ"},
};
