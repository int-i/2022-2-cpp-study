#pragma once

template <typename T>
struct Node {
	T value;
	Node<T>* next;
};