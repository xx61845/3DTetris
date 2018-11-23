#pragma once
#include "stdafx.h"
#include "Block.h"

class BlockTypeF final : public Block {
public:
	BlockTypeF(ID3D12Device* _device, ID3D12DescriptorHeap* _descHeap);
	virtual ~BlockTypeF() = default;

	virtual void OnRender(ID3D12Device* _device, ID3D12GraphicsCommandList* _cmdList, ID3D12DescriptorHeap* _descHeap, ID3D12PipelineState* _pso) override;
	virtual void BuildGeometry(ID3D12Device* _device, ID3D12GraphicsCommandList* _cmdList) override;
	virtual void ResetRelativeData() override;

private:
	virtual void BuildBorder(ID3D12Device* _device, ID3D12GraphicsCommandList* _cmdList) override;
};