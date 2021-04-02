#pragma once
#include <string>
using namespace std;

class SLL
{
public:
	struct INT
	{
		int data;
		INT* next;
		static INT* createNewNode();
	};
	struct BOOL
	{
		bool data;
		BOOL* next;
		static BOOL* createNewNode();
	};
	struct STR
	{
		string data;
		STR* next;
		static STR* createNewNode();
	};
	struct LIST_INT
	{
		SLL::INT* head;
		SLL::INT* tail;
		static LIST_INT* initList();
		void appendNode();
		void appendNode(SLL::INT* newNode);
		void prependNode();
		void prependNode(SLL::INT* newNode);
	};
	struct LIST_BOOL
	{
		SLL::BOOL* head;
		SLL::BOOL* tail;
		static LIST_BOOL* initList();
		void appendNode();
		void appendNode(SLL::BOOL* newNode);
		void prependNode();
		void prependNode(SLL::BOOL* newNode);
	};
	struct LIST_STR
	{
		SLL::STR* head;
		SLL::STR* tail;
		static LIST_STR* initList();
		void appendNode();
		void appendNode(SLL::STR* newNode);
		void prependNode();
		void prependNode(SLL::STR* newNode);
	};
private:
};