//==============================================================================
// Copyright (c) 2015-2016 Advanced Micro Devices, Inc. All rights reserved.
/// \author AMD Developer Tools Team
/// \file
/// \brief  Class to manage a single sample of SW counters
//==============================================================================

#ifndef _DX12_SOFTWARE_COUNTER_DATA_REQUEST_H_
#define _DX12_SOFTWARE_COUNTER_DATA_REQUEST_H_

#include <Windows.h>
#include <vector>
#include <D3D12.h>

#include "DX12ComSmartPtrs.h"
#include "DX12DataRequest.h"
#include "DX12SoftwareCountersResults.h"
#include "GPAContextStateDX12.h"

/// Manage a single sample of SW counters
///
/// Contains the list of enabled counters in the sample.
/// Can detect when counter results are available.
/// Give access to counter results.
class DX12SoftwareCounterDataRequest : public DX12DataRequest
{
public:
    /// Construct a DX12 SW counter data request
    DX12SoftwareCounterDataRequest();

    /// Destroy this DX12 SW counter data request
    virtual ~DX12SoftwareCounterDataRequest();

    /// Collects the results if they are available.
    /// \param[out] resultStorage
    /// \return true if the results were collected; false if they are not available.
    virtual bool CollectResults(GPASampleResult& resultStorage);

    /// Start a counter sample.
    /// Begin must handle the case where a request is reused
    /// try and reuse resources if selectionID matches (which means the same counters are activated).
    /// \param pContextState pointer to object containing the context information for this request
    /// \param pSampleList the sample list where sampling is being started
    /// \param pCounters the set of counters to enable
    /// \return True if the sample could be started; false otherwise.
    virtual bool BeginRequest(
        GPA_ContextState* pContextState,
        void* pSampleList,
        const vector<gpa_uint32>* pCounters);

    /// Ends a counter sample.
    /// \return True on success; false on error.
    virtual bool EndRequest();

    /// Release allocated counters
    virtual void ReleaseCounters();

private:
    /// Struct to describe active counter
    struct ActiveCounter
    {
        gpa_uint32 m_index;           ///< index of counter
        D3D12_QUERY_TYPE m_queryType; ///< query type of counter
    };

    typedef std::vector<ActiveCounter> ActiveCounterListType; ///< Typedef for a list of counters

    static const gpa_uint32 ms_unitializedSampleId = 0xFFFFFFFF; ///< Value of an uninitialized sample id

    GPA_ContextStateDX12* m_pContextState; ///< The context the SW data request is executed on
    ActiveCounterListType m_activeCountersList; ///< The list of active counters
    unsigned int m_activeQueries; ///< The list of active queries
    ID3D12GraphicsCommandListPtr m_commandList; ///< The command list the data request is executed on
    gpa_uint32 m_swSampleId; ///< The SW sample ID executed on the context

    /// Copy constructor - private override to disable usage
    DX12SoftwareCounterDataRequest(const DX12SoftwareCounterDataRequest&) = delete;

    /// Move constructor - private override to disable usage
    DX12SoftwareCounterDataRequest(DX12SoftwareCounterDataRequest&&) = delete;

    /// Copy operator - private override to disable usage
    DX12SoftwareCounterDataRequest& operator=(const DX12SoftwareCounterDataRequest&) = delete;

    /// Move operator - private override to disable usage
    DX12SoftwareCounterDataRequest& operator=(DX12SoftwareCounterDataRequest&&) = delete;

    /// Get counter result for a counter derived from a timestamp query
    /// \return True if counter results were collected, false if not
    /// \param[in] queryResults The SW queries results
    /// \param[in] counterIndex The counter index
    /// \param[out] counterResult Counter result
    bool GetTimestampQueryCounterResult(
        const DX12SoftwareCountersResults& queryResults,
        const gpa_uint32 counterIndex,
        gpa_uint64& counterResult) const;

    /// Get counter result for a counter derived from the timestamp query
    /// \return True if counter results were collected, false if not
    /// \param[in] queryResults The SW queries results
    /// \param[in] counterIndex The counter index
    /// \param[out] counterResult Counter result
    bool GetPipelineQueryCounterResult(
        const DX12SoftwareCountersResults& queryResults,
        const gpa_uint32 counterIndex,
        gpa_uint64& counterResult) const;

};

#endif // _DX12_SOFTWARE_COUNTER_DATA_REQUEST_H_

