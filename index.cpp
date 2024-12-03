#include <iostream>

    struct TreeNode {
            int data;
            TreeNode* left;
            TreeNode* right;
        };
        
        int main() {
        
            TreeNode root = {1, nullptr, nullptr};
            TreeNode node2 = {2, nullptr, nullptr};
            TreeNode node3 = {3, nullptr, nullptr};
            TreeNode node4 = {4, nullptr, nullptr};
            TreeNode node5 = {5, nullptr, nullptr};
        
            root.left = &node2;
            root.right = &node3;
            node2.left = &node4;
            node2.right = &node5;
        
            std::cout << node2.right->data << std::endl;
        
            return 0;
        }
        