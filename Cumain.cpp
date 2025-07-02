#include <iostream>
#include "job.h"
using namespace std;
/// <summary>
/// 매출 관리 재고 상속 
/// 재고 관리 기본 5개 (라면,삼각김밥,핫바)
/// 알바 상속 
/// 결재
/// 
/// </summary>
/// <returns></returns>
int main() {
	int w = 100000;
	int you;
	job cu;



	
	while (true)
	{
		cout << "컵라면(2100) | 핫바(1000) | 삼각김밥(1500)" << endl; // 여기는 재품들 객채 끌어 와서 넣으면 ok 
		cout << "중에서 골라주세요 종료는 3번 .......";
		cin >> you;
	
		if (2100 == you) //컵라면  
		{

			w = w - you;
			cu.calculate_a(you);
			cout << "결재:" << you << "원 남은 잔액:" << w << endl;
			cu.setpatment(you);
			cu.setCublamen();

			cu.getimt();
			cu.getpatment();
		}

		else if (1000 == you) // 핫바
		{
			w = w - you;
			cout << "결재:" << you << "원 남은 잔액:" << w << endl;
			cu.calculate_b(you);
			cu.setpatment(you);
			cu.sethotba();

			cu.getimt();
			cu.getpatment();
			
		}

		else if (1500 == you) // 핫바
		{
			w = w - you;
			cout << "결재:" << you << "원 남은 잔액:" << w << endl;
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
			printf("상품에 맞는 가격을 입력해주세요...");
		}

		cout << endl;
	}
	
}