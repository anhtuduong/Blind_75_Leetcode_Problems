// https://leetcode.com/problems/maximum-depth-of-binary-tree/

import java.util.LinkedList;
import java.util.Queue;

class Main {
    public static void main(String[] args) {
        TreeNode root = new TreeNode(3, new TreeNode(9), new TreeNode(20, new TreeNode(15), new TreeNode(7, new TreeNode(9), null)));
        Solution solution = new Solution();
        System.out.println(solution.maxDepth_DFS(root));
        System.out.println(solution.maxDepth_BFS(root));
    }
}

class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;
    TreeNode() {}
    TreeNode(int val) { this.val = val; }
    TreeNode(int val, TreeNode left, TreeNode right) {
    this.val = val;
    this.left = left;
    this.right = right;
    }
}
 
class Solution {

    // Recursive DFS: O(n)
    public int maxDepth_DFS(TreeNode root) {
        if(root == null) {
            return 0;
        }
        return 1 + Math.max(maxDepth_DFS(root.left), maxDepth_DFS(root.right));
    }

    // BFS: O(n)
    public int maxDepth_BFS(TreeNode root) {
        if(root == null) {
            return 0;
        }
        int level = 0;
        Queue<TreeNode> q = new LinkedList<>();
        q.add(root);
        while(!q.isEmpty()) {
            for(int i = 0; i < q.size(); i++) {
                TreeNode node = q.remove();
                if(node.left != null) {
                    q.add(node.left);
                }
                if(node.right != null) {
                    q.add(node.right);
                }
            }
            level++;
        }
        return level;
    }
}