#include "execution/operator/scan/physical_empty_result.hpp"

using namespace duckdb;
using namespace std;

void PhysicalEmptyResult::_GetChunk(ClientContext &context, DataChunk &chunk, PhysicalOperatorState *state) {
	state->finished = true;
}