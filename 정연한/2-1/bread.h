#pragma once
#include <iostream>
using std::string;


// ����������: public, protected, private
// public: � ��ġ������ ������ �����ϰ� ���ִ� ���� ������
// protected: ����� ���� �ڽ� Ŭ���������� ������ �����ϰ� ���ִ� ���� ������
// private: �� �ʵ� �Ǵ� �޼��尡 ����� Ŭ���������� ������ �����ϰ� ���ִ� ���� ������

class bread {
public: // �޼��尡 �ִ� ��ġ
	// �������� ����: Ŭ������ ��������� �ʱ�ȭ
	bread(string �а���, string ���, string ����)
		// ��� �̴ϼȶ�����
		: �а���{ �а��� }, ���{ ��� }, ����{ ���� } {
	}

	void ����µ�_����_���();

	void set_�а���(string �а���) {
		this->�а��� = �а���;
	}

	string get_�а���() {
		return �а���;
	}

private: // �ʵ尡 �ִ� ��ġ
	string �а���;
	string ���;
	string ����;
};
