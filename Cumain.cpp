#include <iostream>
#include "job.h"
using namespace std;
/// <summary>
/// ���� ���� ��� ��� 
/// ��� ���� �⺻ 5�� (���,�ﰢ���,�ֹ�)
/// �˹� ��� 
/// ����
/// 
/// </summary>
/// <returns></returns>
int main() {
	int w = 100000;
	int you;
	job cu;



	
	while (true)
	{
		cout << "�Ŷ��(2100) | �ֹ�(1000) | �ﰢ���(1500)" << endl; // ����� ��ǰ�� ��ä ���� �ͼ� ������ ok 
		cout << "�߿��� ����ּ��� ����� 3�� .......";
		cin >> you;
	
		if (2100 == you) //�Ŷ��  
		{

			w = w - you;
			cu.calculate_a(you);
			cout << "����:" << you << "�� ���� �ܾ�:" << w << endl;
			cu.setpatment(you);
			cu.setCublamen();

			cu.getimt();
			cu.getpatment();
		}

		else if (1000 == you) // �ֹ�
		{
			w = w - you;
			cout << "����:" << you << "�� ���� �ܾ�:" << w << endl;
			cu.calculate_b(you);
			cu.setpatment(you);
			cu.sethotba();

			cu.getimt();
			cu.getpatment();
			
		}

		else if (1500 == you) // �ֹ�
		{
			w = w - you;
			cout << "����:" << you << "�� ���� �ܾ�:" << w << endl;
			cu.calculate_c(you);
			cu.setpatment(you);
			cu.setrimbob();

			cu.getimt();
			cu.getpatment();
			
		}

		else if (3 == you)
		{
			break;
		}

		else
		{
			printf("��ǰ�� �´� ������ �Է����ּ���...");
		}

		cout << endl;
	}
	
}