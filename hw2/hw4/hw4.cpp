#include <iostream>
using namespace std;
int number[7];
int tree[7];
int insert, location1, number1, delete1, location2;
void cout1();
int main()
{	
	for (int i = 0; i<7; i++)
	{
		cin >> number[i];
	}
		tree[0] = number[0];
		if (number[1]>tree[0])
		{
			tree[1] = tree[0];
			tree[0] = number[1];
		}
		else
		{
			tree[1] = number[1];
		}
		if (number[2] > tree[0])
		{
			tree[2] = tree[0];
			tree[0] = number[2];
		}
		else{
			tree[2] = number[2];
		}
		if (number[3] > tree[0]){
			tree[3] = tree[1];
			tree[1] = tree[0];
			tree[0] = number[3];
		}
		else{
			if (number[3] > tree[1]){
				tree[3] = tree[1];
				tree[1] = number[3];
			}
			else
			{
				tree[3] = number[3];
			}
		}
		if (number[4] > tree[0]){
			tree[4] = tree[1];
			tree[1] = tree[0];
			tree[0] = number[4];
		}
		else{
			if (number[4] > tree[1])
			{
				tree[4] = tree[1];
				tree[1] = number[4];
			}
			else
			{
				tree[4] = number[4];
			}
		}
		if (number[5] > tree[0]){
			tree[5] = tree[1];
			tree[2] = tree[0];
			tree[0] = number[5];
		}
		else{
			if (number[5] > tree[2])
			{
				tree[5] = tree[2];
				tree[2] = number[5];
			}
			else{
				tree[5] = number[5];
			}
		}
		if (number[6] > tree[0]){
			tree[6] = tree[2];
			tree[2] = tree[0];
			tree[0] = number[6];
		}
		else{
			if (number[6] > tree[2]){
				tree[6] = tree[2];
				tree[2] = number[6];
			}
			else{
				tree[6] = number[6];
			}
		}
		cout1();
		cout << "do u want to insert?1(yes)2(no)" << endl;//insertion start
		cin >> insert;
		if (insert == 1 && (tree[1] == 0 || tree[2] == 0 || tree[3] == 0 || tree[4] == 0 || tree[5] == 0 || tree[6] == 0))
		{
			cout << "which location u want to insert(1~6)?" << endl;
			cin >> location1;
			cout << "which number fill in?" << endl;
			cin >> number1;
			if (location1 == 1)
			{
				if (number1 > tree[0])
				{
					tree[1] = tree[0];
					tree[0] = number1;
				}
				else
				{
					tree[1] = number1;
				}
			}
			if (location1 == 2)
			{
				if (number1 > tree[0])
				{
					tree[2] = tree[0];
					tree[0] = number1;
				}
				else
				{
					tree[2] = number1;
				}
			}
			if (location1 == 3)
			{
				if (number1 > tree[0])
				{
					tree[3] = tree[1];
					tree[1] = tree[0];
					tree[0] = number1;
				}
				else if (number1<tree[0] && number1>tree[1])
				{
					tree[3] = tree[1];
					tree[1] = number1;
				}
				else if (number1 < tree[1])
				{
					tree[3] = number1;
				}
			}
			if (location1 == 4){
				if (number1 > tree[0])
				{
					tree[4] = tree[1];
					tree[1] = tree[0];
					tree[0] = number1;
				}
				else if (number1<tree[0] && number1>tree[1])
				{
					tree[4] = tree[1];
					tree[1] = number1;
				}
				else if (number1 < tree[1])
				{
					tree[4] = number1;
				}
			}
			if (location1 == 5)
			{
				if (number1 > tree[0])
				{
					tree[5] = tree[2];
					tree[2] = tree[0];
					tree[0] = number1;
				}
				else if (number1<tree[0] && number1>tree[2])
				{
					tree[5] = tree[2];
					tree[2] = number1;
				}
				else if (number1 < tree[2])
				{
					tree[5] = number1;
				}
			}
			if (location1 == 6)
			{
				if (number1 > tree[0])
				{
					tree[6] = tree[2];
					tree[2] = tree[0];
					tree[0] = number1;
				}
				else if (number1<tree[0] && number1>tree[2])
				{
					tree[6] = tree[2];
					tree[2] = number1;
				}
				else if (number1 < tree[2])
				{
					tree[6] = number1;
				}
			}
		}
		cout1();
		cout << "do u want to delete?1(yes)2(no)" << endl;//delete start
		cin >> delete1;
		cout << "which location u want to delete(3~6)?" << endl;
		cin >> location2;
		if (location2 == 3){
			 tree[3]=0;
		}
		else if (location2 == 4)
		{
			tree[4] = 0;
		}
		else if (location2 == 5)
		{
			tree[5] = 0;
		}
		else if (location2 == 6)
		{
			tree[6] = 0;
		}
		cout1();
	system("pause");
	return 0;
}

void cout1()
{
	cout << "   " << tree[0] << endl;
	cout << " " << tree[1] << "   " << tree[2] << endl;
	cout << tree[3] << " " << tree[4] << " " << tree[5] << " " << tree[6] << endl;
}