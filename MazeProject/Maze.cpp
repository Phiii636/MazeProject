#include "Maze.h"

namespace my
{
	//���ƹ���
	Maze::Maze(const Maze& maze)
	{
		map = maze.map;
	}

	//���鹹��
	Maze::Maze(const vector<vector<int>>& input)
	{
		map = input;
	}

	//����
	size_t Maze::size_row() const
	{
		return map.size();
	}

	//����
	size_t Maze::size_col() const
	{
		return map[0].size();
	}

	//�����Թ���Ԫ��
	const int& Maze::operator()(const size_t& x, const size_t& y) const
	{
		return map[x][y];
	}

	//��ӡ�Թ�
	ostream& operator<<(ostream& os, const Maze& maze)
	{
		for (const auto& row : maze.map)
		{
			for (const auto& sto : row)
			{
				switch(sto)
				{
				case STO_WALL:
					os << PRI_WALL;
					break;
				case STO_PATH:
					os << PRI_PATH;
					break;
				case STO_BEGIN:
					os << PRI_BEGIN;
					break;
				case STO_END:
					os << PRI_END;
					break;
				default:
					break;
				}
			}
			os << endl;
		}

		return os;
	}
}