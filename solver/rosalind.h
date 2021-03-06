#ifndef ROSALIND_H
#define ROSALIND_H

#include <algorithm>
#include <functional>
#include <map>
#include <set>
#include <string>
#include <string_view>
#include <vector>
#include <unordered_map>
#include <stack>


class rosalind {
public:
    rosalind() = delete;

    static std::vector<std::multiset<std::size_t>> overlap(const std::vector<std::string> &patterns);

    static std::vector<std::pair<std::string_view, std::string_view>> pathGraph(std::size_t k, const std::string &text);

    static std::map<std::string_view, std::set<std::string_view>> debrujin(std::size_t k, const std::string &text);

    static std::vector<std::size_t> eulerian_path(const std::vector<std::multiset<std::size_t>> &graph);

    static std::vector<std::vector<int>> greedy_sort_permutation(const std::vector<int> &source);

    static std::size_t permutation_breakpoints_count(const std::vector<int> &source);

    static std::map<std::size_t, std::size_t> connection_graph(const std::vector<std::vector<int>> &p);

    static std::vector<std::vector<std::size_t>>
    cycles(const std::vector<std::vector<int>> &P, const std::vector<std::vector<int>> &Q);

    static std::size_t
    two_break_distance(const std::vector<std::vector<int>> &P, const std::vector<std::vector<int>> &Q);

    static std::vector<std::vector<std::size_t>>
    max_nonbranching_paths(const std::map<std::size_t, std::multiset<std::size_t>> &graph);

    static std::string longest_common_subsequence(const std::string &a, const std::string &b);

    struct alignment {
        int64_t val;
        std::string a, b;
    };

    static alignment align_with_affine_gap(const std::string &a, const std::string &b, int opening_penalty,
                                           int extending_penalty, std::map<char, std::map<char, int>> scoring);

    static int64_t
    limb_length(const std::vector<std::vector<int64_t>> &matrix, std::size_t idx, std::size_t matrix_size);

    static std::map<int, std::map<int, int64_t>>
    additive_phylogeny(const std::vector<std::vector<int64_t>> &matrix, std::size_t n);
};


#endif //ROSALIND_H
