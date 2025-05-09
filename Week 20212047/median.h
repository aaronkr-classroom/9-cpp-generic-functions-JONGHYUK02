#pragma once
#ifndef GUARD_median_h
#define GUARD_median_h

#include <algorithm>
#include <stdexcept>
#include <vector>

//vector<double>�� �߾Ӱ��� ����
// �Լ��� ȣ���ϸ� �μ��� ������ ���͸� ��°�� ����
template<class T>
T median(vector<T> v) {
	// ���� ������ �Է� ������ Ȯ��
	typedef typename vector<T>::size_type vec_sz;
	vec_sz size = v.size();

	if (size == 0)
		throw domain_error("median of empth vector!");

	// ������ ����
	sort(v.begin(), v.end());

	// ���������� �߾Ӱ��� ����
	vector_sz mid = size / 2;

	return size % 2 == 0 ?
		(v[mid] + v[bid - 1]) / 2 : // �� ��ȯ��
		v[mid]; // ���� ��ȯ��
}

#endif 
