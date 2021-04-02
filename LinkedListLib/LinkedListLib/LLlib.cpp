#include "LLlib.h"
using namespace std;
SLL::INT* SLL::INT::createNewNode()
{
	SLL::INT* newNode = new SLL::INT;
	return newNode;
}

SLL::BOOL* SLL::BOOL::createNewNode()
{
	SLL::BOOL* newNode = new SLL::BOOL;
	return newNode;
}

SLL::STR* SLL::STR::createNewNode()
{
	SLL::STR* newNode = new SLL::STR;
	return newNode;
}
SLL::LIST_INT* SLL::LIST_INT::initList()
{
	SLL::LIST_INT* newList = new SLL::LIST_INT;
	newList->head = SLL::INT::createNewNode();
	newList->tail = SLL::INT::createNewNode();
	newList->head->next = newList->tail;
	newList->tail->next = NULL;
	return newList;
}

SLL::LIST_BOOL* SLL::LIST_BOOL::initList()
{
	SLL::LIST_BOOL* newList = new SLL::LIST_BOOL;
	newList->head = SLL::BOOL::createNewNode();
	newList->tail = SLL::BOOL::createNewNode();
	newList->head->next = newList->tail;
	newList->tail->next = NULL;
	return newList;
}

SLL::LIST_STR* SLL::LIST_STR::initList()
{
	SLL::LIST_STR* newList = new SLL::LIST_STR;
	newList->head = SLL::STR::createNewNode();
	newList->tail = SLL::STR::createNewNode();
	newList->head->next = newList->tail;
	newList->tail->next = NULL;
	return newList;
}

void SLL::LIST_INT::appendNode()
{
	SLL::INT* newNode = SLL::INT::createNewNode();
	newNode->next = head;
	head = newNode;
}
void SLL::LIST_INT::appendNode(SLL::INT* newNode)
{
	newNode->next = head;
	head = newNode;
}
void SLL::LIST_INT::prependNode()
{
	tail->next = SLL::INT::createNewNode();
}
void SLL::LIST_INT::prependNode(SLL::INT* newNode)
{
	tail->next = newNode;
}

void SLL::LIST_BOOL::appendNode()
{
	SLL::BOOL* newNode = SLL::BOOL::createNewNode();
	newNode->next = head;
	head = newNode;
}
void SLL::LIST_BOOL::appendNode(SLL::BOOL* newNode)
{
	newNode->next = head;
	head = newNode;
}
void SLL::LIST_BOOL::prependNode()
{
	tail->next = SLL::BOOL::createNewNode();
}
void SLL::LIST_BOOL::prependNode(SLL::BOOL* newNode)
{
	tail->next = newNode;
}
void SLL::LIST_STR::appendNode()
{
	SLL::STR* newNode = SLL::STR::createNewNode();
	newNode->next = head;
	head = newNode;
}
void SLL::LIST_STR::appendNode(SLL::STR* newNode)
{
	newNode->next = head;
	head = newNode;
}
void SLL::LIST_STR::prependNode()
{
	tail->next = SLL::STR::createNewNode();
}
void SLL::LIST_STR::prependNode(SLL::STR* newNode)
{
	tail->next = newNode;
}