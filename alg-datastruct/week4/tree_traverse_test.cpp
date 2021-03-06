#include "tree_traverse.hpp"

#include <gtest/gtest.h>
#include <iostream>
#include <algorithm>

TEST(TreeTraverse_Test, in_order)
{
  const std::vector<TreeNode> tree{
      {4, 1, 2}, {2, 3, 4}, {5, -1, -1}, {1, -1, -1}, {3, -1, -1}};
  TreeTraverse ttrv{&tree};
  const std::vector<std::size_t> right_order{1, 2, 3, 4, 5};

  ttrv.InOrder(tree[0]);
  ASSERT_TRUE(std::equal(right_order.cbegin(), right_order.cend(), ttrv.GetOrder().cbegin()));
}

TEST(TreeTraverse_Test, pre_order)
{
  const std::vector<TreeNode> tree{
      {4, 1, 2}, {2, 3, 4}, {5, -1, -1}, {1, -1, -1}, {3, -1, -1}};
  TreeTraverse ttrv{&tree};
  const std::vector<std::size_t> right_order{4, 2, 1, 3, 5};

  ttrv.PreOrder(tree[0]);
  ASSERT_TRUE(std::equal(right_order.cbegin(), right_order.cend(), ttrv.GetOrder().cbegin()));
}

TEST(TreeTraverse_Test, post_order)
{
  const std::vector<TreeNode> tree{
      {4, 1, 2}, {2, 3, 4}, {5, -1, -1}, {1, -1, -1}, {3, -1, -1}};
  TreeTraverse ttrv{&tree};
  const std::vector<std::size_t> right_order{1, 3, 2, 5, 4};

  ttrv.PostOrder(tree[0]);
  ASSERT_TRUE(std::equal(right_order.cbegin(), right_order.cend(), ttrv.GetOrder().cbegin()));
}
