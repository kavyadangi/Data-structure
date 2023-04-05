#include<stdio.h>
public void function(Node node)
{
	if(size == 0)
		head = node;
	else
	{
		Node temp,cur;
		for(cur = head; (temp = cur.getNext())!=null; cur = temp);
		cur.setNext(node);
	}
	size++;
}