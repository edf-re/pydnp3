/*
 * -*- coding: utf-8 -*- {{{
 * vim: set fenc=utf-8 ft=python sw=4 ts=4 sts=4 et:
 *
 * Copyright 2018, Kisensum.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * Neither Kisensum, nor any of its employees, nor any jurisdiction or
 * organization that has cooperated in the development of these materials,
 * makes any warranty, express or implied, or assumes any legal liability
 * or responsibility for the accuracy, completeness, or usefulness or any
 * information, apparatus, product, software, or process disclosed, or
 * represents that its use would not infringe privately owned rights.
 * Reference herein to any specific commercial product, process, or service
 * by trade name, trademark, manufacturer, or otherwise does not necessarily
 * constitute or imply its endorsement, recommendation, or favoring by Kisensum.
 * }}}
 */

#include <pybind11/pybind11.h>
#include <Python.h>

#include <opendnp3/gen/MasterTaskType.h>

namespace py = pybind11;

void bind_MasterTaskType(py::module &m)
{
	// ----- enum class: opendnp3::MasterTaskType -----
    py::enum_<opendnp3::MasterTaskType>(m, "MasterTaskType",
        "Enumeration of internal tasks.")

		.value("CLEAR_RESTART", opendnp3::MasterTaskType::CLEAR_RESTART)
		.value("DISABLE_UNSOLICITED", opendnp3::MasterTaskType::DISABLE_UNSOLICITED)
		.value("ASSIGN_CLASS", opendnp3::MasterTaskType::ASSIGN_CLASS)
		.value("STARTUP_INTEGRITY_POLL", opendnp3::MasterTaskType::STARTUP_INTEGRITY_POLL)
		.value("NON_LAN_TIME_SYNC", opendnp3::MasterTaskType::NON_LAN_TIME_SYNC)
		.value("LAN_TIME_SYNC", opendnp3::MasterTaskType::LAN_TIME_SYNC)
		.value("ENABLE_UNSOLICITED", opendnp3::MasterTaskType::ENABLE_UNSOLICITED)
		.value("AUTO_EVENT_SCAN", opendnp3::MasterTaskType::AUTO_EVENT_SCAN)
		.value("USER_TASK", opendnp3::MasterTaskType::USER_TASK);

	// ----- func: opendnp3::MasterTaskTypeToString -----
	m.def(
	    "MasterTaskTypeToString",
	    &opendnp3::MasterTaskTypeToString
	);
}
