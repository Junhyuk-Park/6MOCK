#pragma once
#include <list>
#include "../Platform/api.h"

using namespace std;


typedef struct {
	int y;
	int x;
}Point;


typedef struct _MinmaxNode {
	char isMaxnode;				// 1: Min node , 0: Max node
	int weight;					// Node�� ����ġ 
	list<void*> child;			// �ڽĳ��		
	_MinmaxNode* patent;		// �θ���
	Point selec_Point[2];

}MinmaxNode;

typedef struct _MinmaxLeafNode {
	char LeafBoard[BOARD_SIZE][BOARD_SIZE];		// Node�� ���� ����
	char isMaxnode;								// 0: Min node , 1: Max node
	int weight;									// Node�� ����ġ 
	MinmaxNode* patent;						// �θ���
}MinmaxLeafNode;
