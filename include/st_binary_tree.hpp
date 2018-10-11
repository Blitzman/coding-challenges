#ifndef BINARY_TREE_HPP_
#define BINARY_TREE_HPP_

class BinaryTreeNode
{
	public:
		int m_value;
		BinaryTreeNode* m_left;
		BinaryTreeNode* m_right;

		BinaryTreeNode() : m_value(0), m_left(nullptr), m_right(nullptr) { };

};

class BinaryTree
{
	public:

		BinaryTree() : m_root(nullptr) { };

		~BinaryTree()
		{
			destroy_tree(m_root);
		}

		std::string to_string()
		{
			return this->to_string(m_root);
		}

		void insert(const int & crValue)
		{
			if (m_root == nullptr)
			{
				m_root = new BinaryTreeNode();
				m_root->m_value = crValue;
			}
			else
				this->insert(crValue, m_root);
		}

	private:

		BinaryTreeNode* m_root;

		void destroy_tree(BinaryTreeNode* pNode)
		{
			if (pNode != nullptr)
			{
				destroy_tree(pNode->m_left);
				destroy_tree(pNode->m_right);

				delete pNode;
				pNode = nullptr;
			}
		}

		std::string to_string(BinaryTreeNode* pNode)
		{
			std::string str_ = "";

			if (pNode == nullptr)
				str_ = "N";
			else
			{
				str_ += std::to_string(pNode->m_value);
				str_ += "," + this->to_string(pNode->m_left);
				str_ += "," + this->to_string(pNode->m_right);
			}

			return str_;
		}

		void insert(const int & crValue, BinaryTreeNode* pNode)
		{
			if (crValue < pNode->m_value)
			{
				if (pNode->m_left != nullptr)
					this->insert(crValue, pNode->m_left);
				else
				{
					pNode->m_left = new BinaryTreeNode();
					pNode->m_left->m_value = crValue;
				}
			}
			else
			{
				if (pNode->m_right != nullptr)
					this->insert(crValue, pNode->m_right);
				else
				{
					pNode->m_right = new BinaryTreeNode();
					pNode->m_right->m_value = crValue;
				}
			}
		}

};

#endif
