#ifndef MALIS_CPP_H
#define MALIS_CPP_H

void connected_components_cpp(const int nVert,
               const int nEdge, const int* node1, const int* node2, const int* edgeWeight,
               int* seg);

void malis_loss_weights_cpp(const int nVert, const int64_t* seg,
               const int nEdge, const int* node1, const int* node2, const float* edgeWeight,
               uint64_t* nPosPairPerEdge, uint64_t* nNegPairPerEdge,
			   bool ignore_background = false,
			   int counting_method = 0,
			   int stochastic_malis_parameter=0); 

void marker_watershed_cpp(const int nVert, const int* marker,
               const int nEdge, const int* node1, const int* node2, const float* edgeWeight,
               int* seg);
#endif
