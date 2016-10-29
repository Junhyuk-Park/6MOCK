#pragma once
#include "minmax_node.h"


class MinmaxTree {

private:
	MinmaxNode* ptr_root;
	int tree_Depth;
	char game_Board[BOARD_SIZE][BOARD_SIZE];
public:

	void init_Tree(int depth, char (*board)[BOARD_SIZE]);					// ���� ������ ���� �Ұ� �� ó������ ����ؾ� �ϹǷ� Ʈ�� �ʱ�ȭ
	void Create_Tree();		// Ʈ�� Ȯ�� �� Leaf ����� ����ġ ���
	int Search_Tree();					// Leaf���� ������ Minmax��� �� ������ �� �����Ͽ� Key���� ��ȯ
	void Delete_Tree(int key);			// �ʿ� ���� Ʈ�� �߶󳻱�

	void Rec_Create(int depth, MinmaxNode* parent);

	void Rec_Search_Min(int depth, MinmaxNode* parent);
	void Rec_Search_Max(int depth, MinmaxNode* parent);

};