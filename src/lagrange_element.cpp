#include "../include/lagrange_element.hpp"


namespace FEM
{

LagrangeElement::LagrangeElement()
{
    for(int nd = 0; nd<this->N; nd++)
    {
        this->lagrange_points[nd] = this->get_point(nd);
    }
}
LagrangeElement::LagrangeElement(int32_t nodes)  : N(nodes), lagrange_points(nodes)
{
    for(int nd = 0; nd<this->N; nd++)
    {
        this->lagrange_points[nd] = this->get_point(nd);
    }
}

double LagrangeElement::get_point(int nd)
{
    if (this->N == 1)
    {
        return 0.0;
    }
    else 
    {
        if (nd == 0)
        {
            return -1.0;
        }
        else if (nd == this->N-1)
        {
            return 1.0;
        }
        else
        {
            return -1.0 + nd*2.0/((double)this->N-1);
        }
    }
}

double LagrangeElement::shape(const int node, const double x) const
{
    assert(node>0 && node<=N);

    double result = 0.0;
    for (int m = 0; m<this->N;m++)
    {
        if (m != node)
        {
            double x_m = this->lagrange_points[m];
            double x_nd = this->lagrange_points[node];
            result *= (x - x_m)/(x_nd-x_m);
        }
    }
    return result;
}

double LagrangeElement::shape_derivative(const int node,const double x) const
{
    assert(node>0 && node<=N);

    double shape_val = this->shape(node,x);
    double sum = 0.0;
    for (int i = 0; i<this->N; i++)
    {
        sum += 1/(x-this->lagrange_points[i]);
    }

    return sum*shape_val;
}

}
