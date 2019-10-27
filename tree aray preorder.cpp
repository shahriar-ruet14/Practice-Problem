# Python program for Iterative Preorder
# Traversal of N-ary Tree.
# Preorder: Root, print children
# from left to right.

from collections import deque

# Node Structure of K-ary Tree
class NewNode():

	def __init__(self, val):
		self.key = val
		# all children are stored in a list
		self.child =[]


# Utility function to print the
# preorder of the given K-Ary Tree
def preorderTraversal(root):

	Stack = deque([])
	# 'Preorder'-> contains all the
	# visited nodes.
	Preorder =[]
	Preorder.append(root.key)
	Stack.append(root)
	while len(Stack)>0:
		# 'Flag' checks whether all the child
		# nodes have been visited.
		flag = 0
		# CASE 1- If Top of the stack is a leaf
		# node then remove it from the stack:
		if len((Stack[len(Stack)-1]).child)== 0:
			X = Stack.pop()
			# CASE 2- If Top of the stack is
			# Parent with children:
		else:
			Par = Stack[len(Stack)-1]
		# a)As soon as an unvisited child is
		# found(left to right sequence),
		# Push it to Stack and Store it in
		# Auxillary List(Marked Visited)
		# Start Again from Case-1, to explore
		# this newly visited child
		for i in range(0, len(Par.child)):
			if Par.child[i].key not in Preorder:
				flag = 1
				Stack.append(Par.child[i])
				Preorder.append(Par.child[i].key)
				break;
				# b)If all Child nodes from left to right
				# of a Parent have been visited
				# then remove the parent from the stack.
		if flag == 0:
			Stack.pop()
	print(Preorder)

# Execution Start From here
if __name__=='__main__':
# input nodes
				'''
				1
				/ | \
				/ | \
			2 3 4
			/ \ / | \
			5 6 7 8 9
		/ / | \
		10 11 12 13


				'''

root = NewNode(1)
root.child.append(NewNode(2))
root.child.append(NewNode(3))
root.child.append(NewNode(4))
root.child[0].child.append(NewNode(5))
root.child[0].child[0].child.append(NewNode(10))
root.child[0].child.append(NewNode(6))
root.child[0].child[1].child.append(NewNode(11))
root.child[0].child[1].child.append(NewNode(12))
root.child[0].child[1].child.append(NewNode(13))
root.child[2].child.append(NewNode(7))
root.child[2].child.append(NewNode(8))
root.child[2].child.append(NewNode(9))

preorderTraversal(root)
