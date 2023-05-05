#ifndef QUADRATURE_POINTS_HPP
#define QUADRATURE_POINTS_HPP

#include <vector>

namespace FEM
{

class QuadratureData
{
public:
    QuadratureData() = default;

    static constexpr double QuadPoint(int32_t pts,int32_t pt)
    {
        assert(pts>=0 && pts<m_available_pts);
        assert(pt>=0  && pt < m_q.size());

        return m_q[pts][pt];
    }

    
    static constexpr double QuadWeight(int32_t pts,int32_t pt)
    {
        assert(pts>=0 && pts<m_available_pts);
        assert(pt>=0  && pt < m_q.size());

        return m_q[pts][pt];
    }
    

private:
    static const int32_t m_available_pts;
    // Quadrature points (abscissa)
    static const std::vector<std::vector<double>> m_q;
    // Quadrature weights
    static const std::vector<std::vector<double>> m_w;
};

}



#endif