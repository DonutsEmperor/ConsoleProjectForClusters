#include "pch.h"

class NodeProvider : public INodeProvider {
    PCluster mCluster;
public:
    NodeProvider(PCluster pCluster) : mCluster(pCluster) {}
    ~NodeProvider() override {};
    HRESULT GetClusterNodes(std::list<Node>& nodes) const override {
        //nodes = mCluster->mNodes;
        return S_OK;
    }
    HRESULT GetNodeStatus(const std::wstring& nodeName, DWORD* status) const override {
        // Logic to get node status
    }
};