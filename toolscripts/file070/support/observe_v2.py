import observe


class Machine(observe.Machine):
    def schedule_worker(self):
        self.bootstrap_contract_counts = {'device': len(self.device_contracts),
            'stream': len(self.stream_contracts), 'embedded': len(self.embedded_contracts)}
        self.device_contracts = []
        self.stream_contracts = []
        self.embedded_contracts = []
        self.contract_events = []
        return super().schedule_worker()
