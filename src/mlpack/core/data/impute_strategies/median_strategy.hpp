/**
 * @file median_strategy.hpp
 * @author Keon Kim
 *
 */
#ifndef MLPACK_CORE_DATA_IMPUTE_STRATEGIES_MEDIAN_STRATEGY_HPP
#define MLPACK_CORE_DATA_IMPUTE_STRATEGIES_MEDIAN_STRATEGY_HPP


#include <mlpack/core.hpp>


using namespace std;

namespace mlpack {
namespace data {

class MedianStrategy
{
 public:
  typedef size_t impute_type_t;

  template <typename T>
  void Impute(const arma::Mat<T> &input,
              arma::Mat<T> &output,
              const size_t dimension,
              const size_t index)
  {
    output(dimension, index) = 99;
    cout << "IMPUTE CALLED MEDIAN MAP POLICY" << endl;

  }
};

} // namespace data
} // namespace mlpack

#endif