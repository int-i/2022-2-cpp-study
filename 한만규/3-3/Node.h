#pragma once

template <typename T>
struct Node {
	T data;
	Node<T>* prev;
	Node<T>* next;
};
