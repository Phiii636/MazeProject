#include "Maze.h"

namespace my
{
	//���ƹ���
	Maze::Maze(const Maze& maze)
	{
		map = maze.map;
	}

	//ʹ�����ִ洢�Թ���ת������
	//Maze::Maze(const vector<vector<int>>& numInput, const int& numWALL, const int& numPATH)
	//{
	//	map = vector<vector<character>>
	//		(numInput.size(), vector<character>(numInput[0].size()));
	//
	//	for(size_t i = 0;i<numInput.size();++i)
	//		for (size_t j = 0; j < numInput[0].size(); ++j)
	//		{
	//			if (numInput[i][j] == numWALL)
	//				map[i][j] = WALL;
	//			else if (numInput[i][j] == numPATH)
	//				map[i][j] = PATH;
	//			else
	//			{
	//				cout << "�Թ���ʼ������" << endl;
	//				return;
	//			}
	//		}
	//}

	//�ַ���������
	Maze::Maze(const vector<vector<character>>& chInput)
	{
		map = chInput;
	}

	//�滻�ַ�
	void Maze::ReplaceCh(const character& before, const character& after)
	{
		for (auto& row : map)
			for (auto& ch : row)
				if (ch == before)
					ch = after;
	}

	//����
	inline size_t Maze::size_row() const
	{
		return map.size();
	}

	//����
	inline size_t Maze::size_col() const
	{
		return map[0].size();
	}

	//��ӡ�Թ�
	ostream& operator<<(ostream& os, const Maze& maze)
	{
		for (auto row : maze.map)
		{
			for (auto ch : row)
				os << ch;
			os << endl;
		}

		return os;
	}
}