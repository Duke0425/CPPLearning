#include <iostream>
#include "day_two.h"

// �����ͻ�������
/*
 char: 8λ, ͨ���ǵ��������ֽ�. 
 wchar_t: ��չ�ַ���, ���纺�ֻ�������
 
 short ��������ֳ�
 int: һ�������ֳ�
 long: һ���������������ֳ�
 
 �޷�������ʹ�� unsigned


 bool: true, false.
 

 float : �����ȸ�����(32λ)
 double : ˫���ȸ�����(64λ)
 long double ��չ���ȸ�����(96����128λ)
 
 20;
 024;
 0x14;
 128u;
 2024UL;
 1L;
 8LU;
 3.14159F;

 1. ��������������:
	��0Ĭ��Ϊ�˽���, ��0xĬ��Ϊ16����
	ͨ���� ��ֵ�������U����u����unsigned����. ͬʱ��L��U�ܹ��õ�unsigned long
 2. ��������ֵ����:
	ָ����E����e����ʾ. Ĭ�ϵĸ�������������λdouble����, ����ֵ�������F����f��ʾ������, ͬ��������L����l��ʾ��չ����
	���ᳫʹ��Сд��ĸl
 3. ��������ֵ���ַ�����ֵ
	bool test = false;
	�ַ�ʹ�õ�����������, ǰ�����L, �ܹ��õ�wchar_t ���ַ�����ֵ: L'a'
 4. �Ǵ�ӡ�ַ���ת������
	n: ���з� ��
 5. �ַ�������ֵ
	��˫������������������߶���ַ���ʾ.
	"Hello World"
 6. �ַ�������ֵ������


 extern: �������, ����������

 const����: const�޶�����һ������ת����һ������, ����ı������ɱ��޸�.
    �˶���ֻ���ڵ�ǰ�ļ���������з���, �����Ҫ�������ļ����������, ����Ҫ��ʾ��ָ����Ϊextern

 ��ν�������
	& ����
	const���ÿ��԰󶨵���ͬ������۵Ķ����󶨵���ֵ
	��const����ֻ�ܰ󶨵��������ͬ���͵Ķ���.

 2.6 typedef ���� 
 2.7 enum ö������
 2.8 ������, class ��struct, class��ԱĬ��Ϊprivate, ��struct�ؼ��ֶ����� Ĭ�ϳ�Ա���ʼ���Ϊpublic
 2.9 ͷ�ļ�
     ͷ�ļ���������, ���������ڶ���
	 һЩconst��������ͷ�ļ���. 
 #include ��c++ Ԥ��������һ����, ����һ������: ͷ�ļ���
     1. ͷ�ļ�������Ҫ����ͷ�ļ�, ����Ҫʹ�� Ԥ������ͷ�ļ������� �������ظ������ͷ�ļ�������
	 2. Ԥ���������� #ifndef #define
	 ���ͷ�ļ��ڼ�������<>, ��ô��Ϊ��ͷ�ļ�ʱ��׼ͷ�ļ���������������Ԥ�����λ�ü����Ҹ�ͷ�ļ��� ��ЩԤ�����λ��
	 ����ͨ�����ò���·��������������ͨ��������ѡ�����޸ġ� ����������У� ��ô��Ϊ���Ƿ�ϵͳͷ�ļ��� ��ϵͳͷ�ļ��Ĳ���
	 ͨ����ʼ��Դ�ļ�����·����
  */

using namespace std;
extern const int alother;

void welcome() {


}



class Sales_item {

	public:
	//
	private:
		std::string isbn;
		unsigned units_sold;
		double revenue;
};

int main()
{
	enum open_modes {int1 = 1, int2, int3};
	open_modes anther_int1 = int1;

	typedef int simple;
	extern double special_one;
	simple value = 2, pow = 10,
		result = 1;
	simple&ref_value = value;
	value = 2, ref_value = 10;
	for (int cnt = 0; cnt != pow; ++cnt)
		result *= value;
	std:: cout << value << " raised to the power of " << pow << ": \t" << result << std::endl;
	return 0;

}
