#ifndef HELPERS_TREE_HELPERS_H_
#define HELPERS_TREE_HELPERS_H_

#include "runtime/subtree.h"
#include <vector>
#include <string>

extern const char *symbol_names[24];
SubtreeArray *tree_array(std::vector<const Subtree *> trees);

std::ostream &operator<<(std::ostream &stream, const Subtree *tree);
std::ostream &operator<<(std::ostream &stream, const TSNode &node);
bool operator==(const TSNode &left, const TSNode &right);
bool operator==(const std::vector<const Subtree *> &right, const SubtreeArray &array);

void assert_consistent_tree_sizes(TSNode node);

#endif  // HELPERS_TREE_HELPERS_H_
