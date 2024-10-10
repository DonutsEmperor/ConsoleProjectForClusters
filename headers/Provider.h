#pragma once
#include "IProvider.h"

#ifndef PROVIDER_H
#define PROVIDER_H

template <typename T>
class Provider : public IProvider<T> {

protected:
    PCluster mCluster;

public:
    explicit Provider(PCluster cluster) : mCluster(cluster) {}
    virtual ~Provider() = default;

    HRESULT GetAll(std::list<T>&) const override;
    HRESULT GetById(const std::wstring&, T&) const override;
};

#include "Provider.inl"
#endif