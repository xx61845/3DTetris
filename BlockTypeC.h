#pragma once
#include "stdafx.h"
#include "Block.h"

class BlockTypeC : public Block
{
public:
	BlockTypeC(ID3D12Device* _device, ID3D12DescriptorHeap* _descHeap);
	virtual ~BlockTypeC();

	BlockTypeC() = delete;
	BlockTypeC(const BlockTypeC& rhs) = delete;
	BlockTypeC& operator=(const BlockTypeC& rhs) = delete;

public:
	virtual void OnRender(ID3D12Device* _device, ID3D12GraphicsCommandList* _cmdList, ID3D12DescriptorHeap* _descHeap, ID3D12PipelineState* _pso = nullptr, ID3D12PipelineState* _psoTess = nullptr) override;
	virtual void ResetRelativeData() override;

public:
	static void BuildGeometry(ID3D12Device* _device, ID3D12GraphicsCommandList* _cmdList);

private:
	static void BuildBorder(ID3D12Device* _device, ID3D12GraphicsCommandList* _cmdList);

private:
	static std::unique_ptr<MeshGeometry> m_pGeometry;
	static std::unique_ptr<MeshGeometry> m_pBorder;
};