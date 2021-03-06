#pragma once
#include<string>
#include<vector>
#include<map>
#include<Windows.h>
using namespace std;

struct record;
class RecordBoard
{
public:
	// constructor
	RecordBoard();
	~RecordBoard();

	// data member
	vector<wstring> msgBoard;
	vector<record> detailBoard;
	const int startX;
	const int startY;
	const int width;
	const int height;

	// member function
	void printBoard();
	void writeMsg(record);
	void printMsg();
	void writeDetail(record);
	void setRecord(COORD endPoint, const vector<vector<int>>& chessBoard, const vector<vector<int>>& colorBoard);		//從chinessChess呼叫傳資料給recordBoard
private:
	static map<int, wstring> nameMap;
	wstring RedNum(int Xpos);
	wstring BlkNum(int Xpos);
	int recordIndex;			//指向目前的recordBoard索引值
};

struct record
{
	int hunter;			// 移動者
	int Xpos;			// X起始點
	int Ypos;			// Y起始點
	int whosTurn;		// 黑方or紅方 黑:0 紅:1			// = (hunter < 8 && hunter > 0? 0 : 1)
	int deltaX;			// 移動X
	int deltaY;			// 移動Y
	int prey = 0;		// 被吃的人 nullable
};