import java.util.ArrayList;
import java.util.List;

class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;

    TreeNode() {
    }

    TreeNode(int val) {
        this.val = val;
    }

    TreeNode(int val, TreeNode left, TreeNode right) {
        this.val = val;
        this.left = left;
        this.right = right;
    }
}

class Solution {
    public List<List<Integer>> levelOrder(TreeNode root) {
        List<TreeNode> currentlevel = new ArrayList<TreeNode>();
        List<TreeNode> nextlevel = new ArrayList<TreeNode>();
        if (root != null)
            currentlevel.add(root);
        List<Integer> currentValues = new ArrayList<Integer>();
        List<List<Integer>> result = new ArrayList<List<Integer>>();
        while (currentlevel.size() != 0 || nextlevel.size() != 0) {
            TreeNode n = currentlevel.remove(0);
            currentValues.add(n.val);
            if (n.left != null)
                nextlevel.add(n.left);
            if (n.right != null)
                nextlevel.add(n.right);
            if (currentlevel.size() == 0) {
                currentlevel = nextlevel;
                nextlevel = new ArrayList<TreeNode>();
                result.add(currentValues);
                currentValues = new ArrayList<Integer>();
            }
        }
        return result;
    }
}